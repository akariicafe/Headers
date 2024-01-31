@class NSString, NSArray, NSDate;

@interface CLSAbstractHandout : CLSObject <CLSMutableAssetAdopter, CLSAssetAdopter> {
    NSString *_title;
    NSString *_instructions;
    NSDate *_dueDate;
    NSDate *_dateOfPublication;
}

@property (retain, nonatomic) NSDate *dateOfPublication;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *instructions;
@property (retain, nonatomic) NSDate *dueDate;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (void)addAsset:(id)a0;
- (void)removeAsset:(id)a0;

@end

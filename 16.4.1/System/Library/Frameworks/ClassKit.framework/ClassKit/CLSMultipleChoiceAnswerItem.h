@class NSString, NSArray;

@interface CLSMultipleChoiceAnswerItem : CLSObject <CLSRelationable, CLSMutableAssetAdopter> {
    NSString *_itemText;
    long long _displayOrder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *itemText;
@property (nonatomic) long long displayOrder;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relations;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithText:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)mergeWithObject:(id)a0;
- (void)addAsset:(id)a0;
- (void)removeAsset:(id)a0;
- (BOOL)assetsEqual:(id)a0;

@end

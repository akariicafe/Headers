@class NSString, NSData;

@interface CLSBlob : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int type;
@property (retain, nonatomic) NSData *data;

+ (id)relations;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithType:(int)a0 data:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)validateObject:(id *)a0;

@end

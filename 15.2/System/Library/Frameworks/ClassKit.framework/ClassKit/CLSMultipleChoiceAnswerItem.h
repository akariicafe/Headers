@class NSString;

@interface CLSMultipleChoiceAnswerItem : CLSObject <CLSRelationable> {
    NSString *_itemText;
    long long _displayOrder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *itemText;
@property (nonatomic) long long displayOrder;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)initWithText:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validateObject:(id *)a0;

@end

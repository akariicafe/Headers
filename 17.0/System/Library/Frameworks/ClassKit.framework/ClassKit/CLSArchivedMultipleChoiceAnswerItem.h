@class NSString, NSArray;

@interface CLSArchivedMultipleChoiceAnswerItem : CLSObject <CLSRelationable, CLSAssetAdopter> {
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

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)initWithText:(id)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

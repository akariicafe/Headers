@class NSString;

@interface CLSArchivedMultipleChoiceAnswerItem : CLSObject <CLSRelationable> {
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
- (void).cxx_destruct;
- (id)_init;
- (id)initWithCoder:(id)a0;

@end

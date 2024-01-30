@class NSString, NSArray;

@interface CLSArchivedMultipleChoiceAnswerFormat : CLSArchivedAnswerFormat <CLSRelationable> {
    long long _type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSArray *archivedAnswerChoiceItems;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (void)setType:(long long)a0;
- (void)addAnswerItem:(id)a0;

@end

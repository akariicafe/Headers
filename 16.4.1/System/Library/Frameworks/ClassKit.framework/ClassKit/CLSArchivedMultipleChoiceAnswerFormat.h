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

+ (id)relations;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)initWithType:(long long)a0;
- (void)setType:(long long)a0;
- (void)addAnswerItem:(id)a0;

@end

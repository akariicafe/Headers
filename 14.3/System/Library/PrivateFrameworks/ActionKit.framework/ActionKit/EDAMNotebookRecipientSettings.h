@class NSNumber, NSString;

@interface EDAMNotebookRecipientSettings : FATObject

@property (retain, nonatomic) NSNumber *reminderNotifyEmail;
@property (retain, nonatomic) NSNumber *reminderNotifyInApp;
@property (retain, nonatomic) NSNumber *inMyList;
@property (retain, nonatomic) NSString *stack;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

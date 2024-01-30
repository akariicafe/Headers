@class NSNumber;

@interface EDAMSharedNotebookRecipientSettings : FATObject

@property (retain, nonatomic) NSNumber *reminderNotifyEmail;
@property (retain, nonatomic) NSNumber *reminderNotifyInApp;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end

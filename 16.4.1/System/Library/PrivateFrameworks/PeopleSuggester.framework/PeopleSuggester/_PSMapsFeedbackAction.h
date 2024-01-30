@class NSString;

@interface _PSMapsFeedbackAction : _PSFeedbackAction

@property (readonly, copy, nonatomic) NSString *contactId;
@property (readonly, copy, nonatomic) NSString *handle;

+ (id)engagementWithNonSuggestionWithContactIdentifier:(id)a0 handle:(id)a1;
+ (id)engagementWithSuggestionWithContactIdentifier:(id)a0 handle:(id)a1;

- (void).cxx_destruct;
- (id)initWithContactIdentifier:(id)a0 handle:(id)a1 type:(long long)a2;

@end

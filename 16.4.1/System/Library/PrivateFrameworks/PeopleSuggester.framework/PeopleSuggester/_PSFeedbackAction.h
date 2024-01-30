@class NSString, _PSSuggestion;

@interface _PSFeedbackAction : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) _PSSuggestion *suggestion;
@property (readonly, copy, nonatomic) NSString *transportBundleID;

+ (id)abandonment;
+ (id)engagementWithNonSuggestionWithEngagementIdentifier:(id)a0;
+ (id)engagementWithSuggestion:(id)a0 transportBundleID:(id)a1;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 suggestion:(id)a1 transportBundleID:(id)a2;

@end

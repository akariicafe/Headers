@interface HDSummarySharingAnalytics : NSObject

@property (nonatomic) long long numberAuthorizationsSharingOut;
@property (nonatomic) double averageNumberAuthorizationsSharedOutPerPerson;
@property (nonatomic) long long maxAuthorizationsSharedOutPerPerson;
@property (nonatomic) long long minAuthorizationsSharedOutPerPerson;
@property (nonatomic) long long numberPeopleSharingOut;
@property (nonatomic) long long numberPeopleSharingIn;

@end

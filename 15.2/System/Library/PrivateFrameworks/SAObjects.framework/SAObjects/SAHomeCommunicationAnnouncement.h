@class NSString, NSDate;

@interface SAHomeCommunicationAnnouncement : SADomainObject <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *datePlaybackFinished;
@property (copy, nonatomic) NSDate *datePlaybackStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)encodedClassName;
- (id)groupIdentifier;

@end

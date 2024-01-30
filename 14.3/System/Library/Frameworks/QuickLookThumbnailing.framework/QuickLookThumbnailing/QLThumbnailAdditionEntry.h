@class NSString, NSURL, NSDate, NSData;

@interface QLThumbnailAdditionEntry : NSObject <PQLResultSetInitializer, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property unsigned long long documentID;
@property long long size;
@property (retain) NSDate *lastHitDate;
@property (retain) NSURL *lastSeenURL;
@property (retain) NSData *vol_uuid;
@property (readonly) NSString *unparsedVolumeUUID;

@end

@class NSString, APTapAction, NSURL, NSError, NSUUID;

@interface APRepresentationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *contentDataIdentifier;
@property long long placementType;
@property long long desiredPosition;
@property unsigned long long privacyMarkerPosition;
@property struct { double width; double height; } size;
@property (retain) APTapAction *tapAction;
@property (retain) NSString *adTag;
@property (retain) NSURL *videoURL;
@property double duration;
@property double skipThreshold;
@property BOOL skipEnabled;
@property BOOL unbranded;
@property double bitrate;
@property unsigned long long signalStrength;
@property long long connectionType;
@property (retain) NSString *articleID;
@property (retain) NSString *articleTitle;
@property (retain) NSString *advertiserName;
@property (retain) NSString *campaignData;
@property (retain) NSError *error;
@property (readonly) NSUUID *identifier;

+ (id)mockRepresentationWithType:(long long)a0 contentData:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

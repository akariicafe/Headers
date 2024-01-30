@class NSUUID, NSDictionary, NSData, NSString, NSURL;

@interface ASDClipRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSData *placeholderArtwork;
@property (nonatomic) BOOL prefetchDecryption;
@property (readonly, nonatomic) NSUUID *uniqueID;
@property (retain, nonatomic) NSString *installSourceBundleID;
@property (retain, nonatomic) NSString *referrerType;
@property (nonatomic) BOOL thirdPartyWithNoAppReferrer;
@property (retain, nonatomic) NSURL *sourceURL;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

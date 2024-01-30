@class NSString, NSDictionary, DEDNotifierConfiguration, NSSet, NSNumber;

@interface DEDBugSessionConfiguration : NSObject <NSSecureCoding, NSCopying, DEDSecureArchiving> {
    NSSet *_requestedCapabilities;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *requestedCapabilitiesString;
@property long long finishingMove;
@property long long notifyingMove;
@property BOOL allowsCellularUpload;
@property double bugSessionStartTimeout;
@property (retain) NSString *seedingDeviceToken;
@property long long seedingSubmissionID;
@property long long seedingSubmissionType;
@property long long seedingEnvironment;
@property (retain) NSString *seedingHost;
@property (retain) NSNumber *radarProblemID;
@property (retain) NSString *radarAuthToken;
@property (retain) NSString *cloudkitContainer;
@property BOOL cloudkitUseDevelopmentEnvironment;
@property (retain) NSDictionary *cloudkitData;
@property (retain) DEDNotifierConfiguration *notifierConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)secureUnarchiveWithData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)secureArchive;
- (id)requestedCapabilities;
- (void)requestCapabilitiesSet:(id)a0;
- (void)requestCapabilities:(id)a0;

@end

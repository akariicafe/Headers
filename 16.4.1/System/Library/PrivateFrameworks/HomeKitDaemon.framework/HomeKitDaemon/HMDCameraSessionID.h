@class NSString, NSMutableDictionary;

@interface HMDCameraSessionID : HMFObject <NSCopying> {
    NSString *_description;
}

@property (readonly) NSString *sessionID;
@property (readonly, copy) NSString *hostProcessBundleIdentifier;
@property (readonly, getter=isSPIClient) BOOL spiClient;
@property (readonly) NSMutableDictionary *milestones;
@property (readonly) NSString *deviceSectionName;
@property (readonly) NSMutableDictionary *deviceMilestones;

+ (id)hostProcessBundleIdentifierForMessage:(id)a0;
+ (id)millisecondsSince1970;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)addParameterFor:(id)a0 value:(id)a1;
- (id)initWithSessionID:(id)a0 hostProcessBundleIdentifier:(id)a1 isSPIClient:(BOOL)a2 deviceSectionName:(id)a3 description:(id)a4;
- (id)initWithSessionID:(id)a0 message:(id)a1 description:(id)a2;
- (void)markMilestoneFor:(id)a0;
- (void)markMilestoneForPath:(id)a0;
- (void)setParameterFor:(id)a0 value:(id)a1;
- (void)setParameterForPath:(id)a0 value:(id)a1;

@end

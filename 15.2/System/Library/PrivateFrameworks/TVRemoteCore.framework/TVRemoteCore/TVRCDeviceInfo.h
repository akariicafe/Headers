@class NSString;

@interface TVRCDeviceInfo : NSObject {
    NSString *_mediaRemoteID;
    NSString *_airplayID;
}

@property (readonly) NSString *mediaRemoteID;
@property (readonly) NSString *airplayID;

- (id)description;
- (void).cxx_destruct;
- (BOOL)containsID:(id)a0;
- (void)_populateValidIdentifiers:(id)a0;

@end

@class NSString, NSFileManager, geo_isolater;

@interface MNKeepAliveManager : NSObject {
    geo_isolater *_isolator;
}

@property (class, readonly, nonatomic) MNKeepAliveManager *sharedInstance;

@property unsigned long long counter;
@property (retain, nonatomic) NSString *launchdKeepAliveFile;
@property (retain, nonatomic) NSFileManager *fileManager;

- (void)checkIn;
- (void).cxx_destruct;
- (id)init;
- (void)checkOut;

@end

@class NSString, NSFileManager, geo_isolater;

@interface MNKeepAliveManager : NSObject {
    geo_isolater *_isolator;
}

@property (class, readonly, nonatomic) MNKeepAliveManager *sharedInstance;

@property unsigned long long counter;
@property (retain, nonatomic) NSString *launchdKeepAliveFile;
@property (retain, nonatomic) NSFileManager *fileManager;

- (void)checkIn;
- (id)init;
- (void).cxx_destruct;
- (void)checkOut;

@end

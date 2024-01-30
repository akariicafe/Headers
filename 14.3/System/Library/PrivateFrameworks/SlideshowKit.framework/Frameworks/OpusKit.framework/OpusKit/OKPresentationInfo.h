@class UIColor, NSString, NSRecursiveLock, NSDate, OKPresentation, NSMutableArray;

@interface OKPresentationInfo : NSObject {
    NSRecursiveLock *_infoLock;
    UIColor *backgroundColor;
}

@property (nonatomic) OKPresentation *presentation;
@property (copy) NSString *uuid;
@property (copy) NSDate *creationDate;
@property (copy) NSDate *lastModifiedDate;
@property (copy) NSString *versionID;
@property unsigned long long formatVersion;
@property double apiVersion;
@property unsigned long long format;
@property (copy) NSString *producerIdentifier;
@property double producerVersion;
@property BOOL requiresProducer;
@property (copy) NSMutableArray *resolutions;
@property BOOL couchPotatoSupported;
@property double couchPotatoDelay;
@property BOOL motionSupported;
@property BOOL wheelControllerSupported;
@property BOOL overviewSupported;
@property BOOL trailerSupported;
@property (copy) NSString *trailerNavigatorName;
@property (copy) NSString *mainNavigatorName;
@property (copy) NSString *mainFeederName;
@property (retain) UIColor *backgroundColor;
@property BOOL renderTimeLoggingSupported;
@property double couchPotatoStepDuration;

- (void)unlock;
- (void)lock;
- (id)init;
- (id)dictionary;
- (void)reset;
- (void)dealloc;
- (void)importFromDictionary:(id)a0;

@end

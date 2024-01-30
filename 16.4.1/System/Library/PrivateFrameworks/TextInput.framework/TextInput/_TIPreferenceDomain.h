@class NSString;

@interface _TIPreferenceDomain : NSObject

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *notification;
@property (nonatomic) BOOL needsGetSync;
@property (nonatomic) BOOL needsSetSync;
@property (nonatomic) double lastSynchronizedTime;

+ (id)domainWithName:(id)a0 notification:(id)a1;

- (void).cxx_destruct;

@end

@class ENAdvertisementDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface ENAdvertisementDatabaseQuerySession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _tekCount;
}

@property (readonly, nonatomic) unsigned char attenuationThreshold;
@property (readonly, nonatomic) ENAdvertisementDatabase *database;
@property (readonly, nonatomic) unsigned int storedAdvertisementCount;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDatabase:(id)a0 attenuationThreshold:(unsigned char)a1 advertisementCount:(unsigned int)a2 queue:(id)a3;
- (BOOL)enumerateAdvertisementsMatchingKeys:(id)a0 attenuationThreshold:(unsigned char)a1 timestampTolerance:(double)a2 error:(id *)a3 handler:(id /* block */)a4;

@end

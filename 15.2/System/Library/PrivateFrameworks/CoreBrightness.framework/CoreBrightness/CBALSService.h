@class NSString;

@interface CBALSService : CBHIDService {
    NSString *_desc;
}

@property (readonly) BOOL validData;
@property (readonly) double lux;
@property (readonly) BOOL colorSupport;
@property (readonly) double x;
@property (readonly) double y;
@property (readonly) double CCT;
@property (readonly) unsigned long long location;

- (id)description;
- (void)setEvent:(struct __IOHIDEvent { } *)a0;
- (void)dealloc;
- (id)initWithHIDALSServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyDataInDictionary;
- (BOOL)updateEventData;
- (void)resetEventData;

@end

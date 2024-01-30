@class PBCodable, NSString, NSURL, NSDate, NSData, GEORRRequestResponseEvent;

@interface GEORequestResponsePersistedEvent : NSObject {
    GEORRRequestResponseEvent *_event;
    PBCodable *_decodedMessage;
}

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) int eventType;
@property (readonly, nonatomic) int messageType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *serviceURL;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSURL *eventFileURL;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) GEORRRequestResponseEvent *rrEvent;
@property (readonly, nonatomic) NSData *rawMessage;
@property (readonly, nonatomic) PBCodable *decodedMessage;

+ (id /* block */)enumeratorBlockHelper:(id /* block */)a0;

- (void).cxx_destruct;

@end

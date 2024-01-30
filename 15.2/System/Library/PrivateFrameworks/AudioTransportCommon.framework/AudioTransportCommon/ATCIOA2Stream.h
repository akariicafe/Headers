@class IOKConnection, NSArray, ATCIOA2StreamFormat, IOKService;

@interface ATCIOA2Stream : NSObject {
    IOKService *_service;
    IOKConnection *_connection;
    unsigned long long _index;
    unsigned int _physicalID;
}

@property (readonly, nonatomic, getter=isInput) BOOL input;
@property (readonly, copy, nonatomic) ATCIOA2StreamFormat *currentFormat;
@property (readonly, copy, nonatomic) NSArray *availableFormats;
@property (readonly, nonatomic) unsigned int startingChannel;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 connection:(id)a1 index:(unsigned long long)a2 input:(BOOL)a3 description:(id)a4;

@end

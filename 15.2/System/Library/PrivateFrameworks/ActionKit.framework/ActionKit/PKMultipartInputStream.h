@class NSString, NSMutableArray, NSData;
@protocol NSStreamDelegate;

@interface PKMultipartInputStream : NSInputStream {
    id<NSStreamDelegate> delegate;
}

@property (retain, nonatomic) NSMutableArray *parts;
@property (retain, nonatomic) NSString *boundary;
@property (retain, nonatomic) NSData *footer;
@property (nonatomic) unsigned long long currentPart;
@property (nonatomic) unsigned long long delivered;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long status;

- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)close;
- (void)open;
- (void)setDelegate:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasBytesAvailable;
- (void).cxx_destruct;
- (id)init;
- (id)delegate;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; })a2;
- (unsigned long long)streamStatus;
- (void)_scheduleInCFRunLoop:(id)a0 forMode:(id)a1;
- (id)propertyForKey:(id)a0;
- (void)updateLength;
- (void)addPartWithName:(id)a0 string:(id)a1;
- (void)addPartWithName:(id)a0 data:(id)a1;
- (void)addPartWithName:(id)a0 data:(id)a1 contentType:(id)a2;
- (void)addPartWithName:(id)a0 filename:(id)a1 data:(id)a2 contentType:(id)a3;
- (void)addPartWithName:(id)a0 path:(id)a1;
- (void)addPartWithName:(id)a0 filename:(id)a1 path:(id)a2;
- (void)addPartWithName:(id)a0 filename:(id)a1 path:(id)a2 contentType:(id)a3;
- (void)addPartWithName:(id)a0 filename:(id)a1 stream:(id)a2 streamLength:(unsigned long long)a3;
- (void)addPartWithHeaders:(id)a0 string:(id)a1;
- (void)addPartWithHeaders:(id)a0 path:(id)a1;

@end

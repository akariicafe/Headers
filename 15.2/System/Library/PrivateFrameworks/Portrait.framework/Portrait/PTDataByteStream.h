@class NSError, NSData, NSString;

@interface PTDataByteStream : NSObject <PTByteStream>

@property (retain) NSError *error;
@property (retain) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (unsigned long long)size;
- (void).cxx_destruct;
- (unsigned long long)readBytes:(void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)_errorForSize:(unsigned long long)a0 offset:(unsigned long long)a1;

@end

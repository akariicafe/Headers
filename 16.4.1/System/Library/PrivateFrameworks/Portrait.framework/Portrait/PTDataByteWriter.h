@class NSError, NSMutableData, NSString;

@interface PTDataByteWriter : NSObject <PTByteWriter>

@property (retain) NSError *error;
@property (retain) NSMutableData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_errorForSize:(unsigned long long)a0 offset:(unsigned long long)a1;
- (BOOL)appendBytes:(const void *)a0 size:(unsigned long long)a1;
- (id)initWithMutableData:(id)a0;
- (BOOL)writeBytes:(const void *)a0 size:(unsigned long long)a1 offset:(unsigned long long)a2;

@end

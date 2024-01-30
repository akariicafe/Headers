@class NSString;

@interface NFSeshatSession : NFSession <NFSeshatSessionCallbacks>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTransientError:(struct { unsigned int x0; unsigned int x1; })a0;
+ (unsigned long long)largeCrumbsFromError:(id)a0;
+ (unsigned int)smallCrumbsFromError:(id)a0;

- (struct { unsigned int x0; unsigned int x1; })obliterate;
- (struct { unsigned int x0; unsigned int x1; })allocateSlot:(unsigned char)a0 authorizingUser:(unsigned char)a1 authorizingUserToken:(id)a2 outToken:(id *)a3 outWriteCount:(unsigned int *)a4;
- (struct { unsigned int x0; unsigned int x1; })allocateSlot:(unsigned char)a0 authorizingUser:(unsigned char)a1 authorizingUserToken:(id)a2 outToken:(id *)a3 outWriteCount:(unsigned int *)a4 trackingError:(id *)a5;
- (struct { unsigned int x0; unsigned int x1; })authorizeUpdate:(BOOL)a0 slotIndex:(unsigned char)a1 userToken:(id)a2 outWriteCount:(unsigned int *)a3;
- (struct { unsigned int x0; unsigned int x1; })authorizeUpdate:(BOOL)a0 slotIndex:(unsigned char)a1 userToken:(id)a2 outWriteCount:(unsigned int *)a3 trackingError:(id *)a4;
- (struct { unsigned int x0; unsigned int x1; })deleteSlot:(unsigned char)a0 outWriteCount:(unsigned int *)a1;
- (struct { unsigned int x0; unsigned int x1; })deleteSlot:(unsigned char)a0 outWriteCount:(unsigned int *)a1 trackingError:(id *)a2;
- (struct { unsigned int x0; unsigned int x1; })derive:(unsigned char)a0 userHash:(id)a1 outData:(id *)a2 outWriteCount:(unsigned int *)a3;
- (struct { unsigned int x0; unsigned int x1; })derive:(unsigned char)a0 userHash:(id)a1 outData:(id *)a2 outWriteCount:(unsigned int *)a3 trackingError:(id *)a4;
- (struct { unsigned int x0; unsigned int x1; })getData:(id *)a0 updateKUD:(char *)a1 outWriteLimit:(unsigned int *)a2 outWriteCount:(unsigned int *)a3;
- (struct { unsigned int x0; unsigned int x1; })getData:(id *)a0 updateKUD:(char *)a1 outWriteLimit:(unsigned int *)a2 outWriteCount:(unsigned int *)a3 trackingError:(id *)a4;
- (struct { unsigned int x0; unsigned int x1; })getHash:(id *)a0;
- (struct { unsigned int x0; unsigned int x1; })getHash:(id *)a0 trackingError:(id *)a1;
- (struct { unsigned int x0; unsigned int x1; })obliterateWithTrackingError:(id *)a0;
- (struct { unsigned int x0; unsigned int x1; })resetCounter:(unsigned char)a0 userToken:(id)a1 outWriteCount:(unsigned int *)a2;
- (struct { unsigned int x0; unsigned int x1; })resetCounter:(unsigned char)a0 userToken:(id)a1 outWriteCount:(unsigned int *)a2 trackingError:(id *)a3;
- (struct { unsigned int x0; unsigned int x1; })upgradeKey:(unsigned char)a0 inputData:(id)a1 outWriteCount:(unsigned int *)a2;
- (struct { unsigned int x0; unsigned int x1; })upgradeKey:(unsigned char)a0 inputData:(id)a1 outWriteCount:(unsigned int *)a2 trackingError:(id *)a3;

@end

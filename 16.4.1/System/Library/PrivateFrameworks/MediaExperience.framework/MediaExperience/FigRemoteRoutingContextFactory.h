@class NSString;

@interface FigRemoteRoutingContextFactory : NSObject <FigRoutingContextFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)copyContextForUUIDWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)createAudioContextWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copySystemAudioContextWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copyAllAudioContexts:(const struct __CFArray **)a0;
- (int)createVideoContextWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)createRemoteMusicControllerContextWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)createPerAppSecondDisplayContextWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copySidePlayContextWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copySystemRemotePoolContextWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copySystemMusicContextWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copySystemMirroringContextWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)copyDisplayMenuVideoContextWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;
- (int)createControlChannelOnlyContextWithAllocator:(const struct __CFAllocator { } *)a0 options:(const struct __CFDictionary { } *)a1 context:(struct OpaqueFigRoutingContext **)a2;

@end

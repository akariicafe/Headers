@class NSObject, NSArray, NSDictionary, NSData, NSURL, AVAudioSession, AVAudioFormat;
@protocol AVAudioPlayerDelegate, OS_dispatch_queue;

@interface AudioPlayerImpl : NSObject {
    id<AVAudioPlayerDelegate> _delegate;
    NSData *_data;
    NSURL *_url;
    NSDictionary *_actualSettings;
    AVAudioFormat *_format;
    BOOL _playRetain;
    NSArray *_channelAssignments;
    AVAudioSession *_audioSession;
    BOOL _sessionListenerWasSet;
    unsigned long long _endInterruptionFlags;
    struct AVAudioPlayerCpp { struct __CFData *x0; struct __CFURL *x1; struct __CFDictionary *x2; unsigned int x3; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x4; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x5; unsigned int x6; unsigned long long x7; char *x8; unsigned int x9; struct AudioFormatListItem *x10; unsigned int x11; struct OpaqueAudioFileID *x12; unsigned int x13; struct OpaqueAudioQueue *x14; long long x15; long long x16; long long x17; double x18; double x19; double x20; double x21; unsigned int x22; double x23; int x24; struct AudioFilePacketTableInfo { long long x0; int x1; int x2; } x25; long long x26; long long x27; int x28; int x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; unsigned int x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; double x39; double x40; double x41; double x42; double x43; double x44; struct __CFString *x45; unsigned int x46; struct AudioQueueLevelMeterState *x47; struct AudioQueueBuffer *x48[3]; struct AudioQueueBuffer *x49; int x50; unsigned int x51[3]; BOOL x52; BOOL x53; BOOL x54; BOOL x55; BOOL x56; struct AudioQueueBuffer *x57; unsigned int x58; BOOL x59; BOOL x60; BOOL x61; BOOL x62; long long x63; int x64; unsigned int x65; unsigned int x66; void *x67; void /* function */ *x68; unsigned int x69; id x70; unsigned int x71; struct AudioQueueChannelAssignment *x72; } *_localPlayer;
    NSObject<OS_dispatch_queue> *_gcd;
}

- (id)init;
- (void)dealloc;

@end

@interface NviConstants : NSObject

+ (unsigned int)inputRecordingNumberOfChannels;
+ (float)inputRecordingSampleRate;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })nviDirectionalityLpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })nviDirectionalityLpcmInterleavedASBD;
+ (unsigned int)numChannelsForNviDirectionality;
+ (unsigned int)nviDirectionalityStartingChannelId;
+ (unsigned int)nviDirectionalityEndingChannelId;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })monoChannelLpcmASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })allChannelsLpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })allChannelsLpcmNonInterleavedASBD;
+ (id)nviLogsRootDir;

@end

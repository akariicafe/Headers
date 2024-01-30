@class NSString;
@protocol ICSInputByteStream;

@interface ICSPushbackStream : NSObject <ICSInputByteStream> {
    id<ICSInputByteStream> _underStream;
    char *_pbData;
    int _pbCursor;
    BOOL _readPastEOS;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)eos;
- (void).cxx_destruct;
- (char)read;
- (void)dealloc;
- (BOOL)pushBack:(char)a0;
- (id)initWithInputStream:(id)a0;
- (char)peek;

@end

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
- (char)read;
- (void).cxx_destruct;
- (BOOL)pushBack:(char)a0;
- (char)peek;
- (void)dealloc;
- (id)initWithInputStream:(id)a0;

@end

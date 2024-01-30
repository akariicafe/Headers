@class NSData;

@interface _WKSessionState : NSObject {
    struct SessionState { struct BackForwardListState { struct Vector<WebKit::BackForwardListItemState, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct BackForwardListItemState *m_buffer; unsigned int m_capacity; unsigned int m_size; } items; struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } currentIndex; } backForwardListState; unsigned long long renderTreeSize; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } m_string; unsigned char m_isValid : 1; unsigned char m_protocolIsInHTTPFamily : 1; unsigned char m_cannotBeABaseURL : 1; unsigned char m_portLength : 3; unsigned int m_schemeEnd : 26; unsigned int m_userStart; unsigned int m_userEnd; unsigned int m_passwordEnd; unsigned int m_hostEnd; unsigned int m_pathAfterLastSlash; unsigned int m_pathEnd; unsigned int m_queryEnd; } provisionalURL; BOOL isAppInitiated; } _sessionState;
}

@property (readonly, copy, nonatomic) NSData *data;
@property (nonatomic) BOOL isAppInitiated;

- (id)initWithData:(id)a0;
- (id)_initWithSessionState:(struct SessionState { struct BackForwardListState { struct Vector<WebKit::BackForwardListItemState, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct BackForwardListItemState *x0; unsigned int x1; unsigned int x2; } x0; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x1; } x0; unsigned long long x1; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 3; unsigned int x5 : 26; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } x2; BOOL x3; })a0;
- (struct SessionState { struct BackForwardListState { struct Vector<WebKit::BackForwardListItemState, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct BackForwardListItemState *x0; unsigned int x1; unsigned int x2; } x0; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x1; } x0; unsigned long long x1; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *x0; } x0; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 3; unsigned int x5 : 26; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } x2; BOOL x3; })_sessionStateWithAppInitiatedValue;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

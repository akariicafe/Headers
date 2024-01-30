@class RPStreamSession, NSString, SidecarSession;

@interface SidecarStream : NSObject <NSSecureCoding> {
    NSString *_identifier;
    RPStreamSession *_rapportStream;
    id /* block */ _handler;
    SidecarSession *_session;
    _Atomic unsigned long long _status;
    _Atomic BOOL _activated;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) RPStreamSession *rapportStream;
@property (readonly) SidecarSession *session;
@property (readonly, nonatomic) long long transport;
@property (readonly, nonatomic) struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } nwClientID;
@property (readonly) unsigned long long status;
@property (readonly) long long fileDescriptor;
@property (readonly) NSString *identifier;
@property (readonly) long long type;
@property (readonly) unsigned long long flags;
@property (copy) id /* block */ handler;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)setStatus:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 rapportStream:(id)a1;
- (void)sendOPACK:(id)a0 completion:(id /* block */)a1;

@end

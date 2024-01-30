@class NSUUID, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SFSessionCache : NSObject <NSSecureCoding> {
    BOOL _activated;
    BOOL _invalidated;
    NSMutableDictionary *_sessions;
    NSMutableDictionary *_timestamps;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long capacity;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *serviceIdentifier;

- (void)clearCache;
- (void)_ensureStarted;
- (id)init;
- (void).cxx_destruct;
- (void)_sessionWasInterrupted:(id)a0;
- (void)_sessionWasInvalidated:(id)a0;
- (id)_sessionWithDevice:(id)a0 activate:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)activePeerDeviceIDs;
- (void)sendRequestWithFlags:(unsigned int)a0 object:(id)a1 responseHandler:(id /* block */)a2 toDevice:(id)a3;
- (void)sendWithFlags:(unsigned int)a0 object:(id)a1 toDevice:(id)a2;
- (id)sessionWithDevice:(id)a0 activate:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)activate;
- (id)activeSessions;
- (void)_ensureStopped;
- (BOOL)cacheFull;
- (void)_popCache;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end

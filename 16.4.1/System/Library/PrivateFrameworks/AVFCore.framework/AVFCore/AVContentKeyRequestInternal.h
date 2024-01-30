@class NSData, NSString, AVContentKeySession, NSError, AVContentKeySpecifier, AVContentKey, NSDictionary, AVContentKeyReportGroup;

@interface AVContentKeyRequestInternal : NSObject {
    AVContentKeySession *weakSession;
    AVContentKeyReportGroup *reportGroup;
    id identifier;
    NSData *keyIDFromInitializationData;
    NSData *initializationData;
    long long status;
    int responseParamsSent;
    BOOL providesPersistableKey;
    NSDictionary *preloadingRequestOptions;
    struct OpaqueFigCPECryptor { } *figCryptor;
    NSError *error;
    struct __CFDictionary { } *requestInfo;
    unsigned long long customURLRequestID;
    struct OpaqueFigCustomURLHandler { } *customURLHandler;
    BOOL isRenewalRequest;
    NSString *cryptorUUID;
    unsigned long long cryptorKeyRequestID;
    BOOL isInchargeOfKeyRequest;
    struct OpaqueFigSimpleMutex { } *stateMutex;
    BOOL hasAnyKeyRequestSucceeded;
    AVContentKeySpecifier *contentKeySpecifier;
    AVContentKey *contentKey;
    NSData *contentIdentifier;
    struct OpaqueFigCFWeakReferenceHolder { } *weakContentKeyBoss;
    BOOL useContentKeyBoss;
    long long requestID;
    struct FigContentKeySpecifier { } *keySpecifier;
}

- (void).cxx_destruct;

@end

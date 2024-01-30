@class AVContentKeySession, NSString, NSDictionary, NSData, NSError, AVContentKeyReportGroup;

@interface AVContentKeyRequestInternal : NSObject {
    AVContentKeySession *session;
    AVContentKeyReportGroup *reportGroup;
    id identifier;
    NSData *keyIDFromInitializationData;
    NSData *initializationData;
    long long status;
    int responseInfoSent;
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
    struct OpaqueFigSimpleMutex { } *stateMutex;
    BOOL hasAnyKeyRequestSucceeded;
}

@end

@interface AWDNFCGeneralStatistic : PBCodable <NSCopying> {
    unsigned long long _startTimestamp;
    unsigned long long _timestamp;
    unsigned int _radioChangeCount;
    unsigned int _seCounterMeasureLevel;
    unsigned int _totalAPNReceived;
    unsigned int _totalAccessTransaction;
    unsigned int _totalAuthECommerce;
    unsigned int _totalBurnoutTimerCounter;
    unsigned int _totalCEEnable;
    unsigned int _totalCEEnabledWithMissingTransactionEndEvent;
    unsigned int _totalCEEnabledWithNoFieldDetected;
    unsigned int _totalCardProvisioned;
    unsigned int _totalDynamicPackages;
    unsigned int _totalDynamicRFParametersUpdate;
    unsigned int _totalExpressFelicaTransaction;
    unsigned int _totalFailureWithMissingTransactionEndEvent;
    unsigned int _totalFailureWithTransactionEndEventErrors;
    unsigned int _totalFelicaEMoneyTransaction;
    unsigned int _totalFelicaTransitTransaction;
    unsigned int _totalGenericAExpressTransaction;
    unsigned int _totalLPEMCounter;
    unsigned int _totalMWExceptions;
    unsigned int _totalPTDatabaseCorruption;
    unsigned int _totalPTKeyDeletionFailed;
    unsigned int _totalPTKeys;
    unsigned int _totalPeerPaymentRequest;
    unsigned int _totalPeerPaymentRequestFailure;
    unsigned int _totalPlasticCardModeEnable;
    unsigned int _totalRestrictModeEntered;
    unsigned int _totalSuccessfulCardIngestion;
    unsigned int _totalSuccessfulCardIngestionWithSessionToken;
    unsigned int _totalSuccessfulVAS;
    unsigned int _totalTransactionEndEvent;
    unsigned int _totalTransientDeactiveTimeout;
    unsigned int _totalVASActivation;
    unsigned int _totalVASSignup;
    unsigned int _totalVASTransactionException;
    BOOL _hasAccessExpressTransactionEnable;
    BOOL _hasAttackLogs;
    BOOL _hasFelicaExpressTransactionEnable;
    BOOL _hasGenericAExpressEnable;
    BOOL _radioIsEnabled;
    struct { unsigned char startTimestamp : 1; unsigned char timestamp : 1; unsigned char radioChangeCount : 1; unsigned char seCounterMeasureLevel : 1; unsigned char totalAPNReceived : 1; unsigned char totalAccessTransaction : 1; unsigned char totalAuthECommerce : 1; unsigned char totalBurnoutTimerCounter : 1; unsigned char totalCEEnable : 1; unsigned char totalCEEnabledWithMissingTransactionEndEvent : 1; unsigned char totalCEEnabledWithNoFieldDetected : 1; unsigned char totalCardProvisioned : 1; unsigned char totalDynamicPackages : 1; unsigned char totalDynamicRFParametersUpdate : 1; unsigned char totalExpressFelicaTransaction : 1; unsigned char totalFailureWithMissingTransactionEndEvent : 1; unsigned char totalFailureWithTransactionEndEventErrors : 1; unsigned char totalFelicaEMoneyTransaction : 1; unsigned char totalFelicaTransitTransaction : 1; unsigned char totalGenericAExpressTransaction : 1; unsigned char totalLPEMCounter : 1; unsigned char totalMWExceptions : 1; unsigned char totalPTDatabaseCorruption : 1; unsigned char totalPTKeyDeletionFailed : 1; unsigned char totalPTKeys : 1; unsigned char totalPeerPaymentRequest : 1; unsigned char totalPeerPaymentRequestFailure : 1; unsigned char totalPlasticCardModeEnable : 1; unsigned char totalRestrictModeEntered : 1; unsigned char totalSuccessfulCardIngestion : 1; unsigned char totalSuccessfulCardIngestionWithSessionToken : 1; unsigned char totalSuccessfulVAS : 1; unsigned char totalTransactionEndEvent : 1; unsigned char totalTransientDeactiveTimeout : 1; unsigned char totalVASActivation : 1; unsigned char totalVASSignup : 1; unsigned char totalVASTransactionException : 1; unsigned char hasAccessExpressTransactionEnable : 1; unsigned char hasAttackLogs : 1; unsigned char hasFelicaExpressTransactionEnable : 1; unsigned char hasGenericAExpressEnable : 1; unsigned char radioIsEnabled : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end

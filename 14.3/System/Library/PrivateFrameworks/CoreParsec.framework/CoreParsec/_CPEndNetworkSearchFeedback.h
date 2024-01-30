@class NSString, NSDictionary, NSData, _CPNetworkTimingData;

@interface _CPEndNetworkSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPEndNetworkSearchFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long responseSize;
@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *parsecStatus;
@property (copy, nonatomic) NSString *fbq;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *partialClientIp;
@property (retain, nonatomic) _CPNetworkTimingData *timingData;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end

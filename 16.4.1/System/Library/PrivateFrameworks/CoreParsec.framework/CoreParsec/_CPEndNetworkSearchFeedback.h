@class NSString, _CPNetworkTimingData, NSData;

@interface _CPEndNetworkSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPEndNetworkSearchFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
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
@property (nonatomic) int endpointType;
@property (nonatomic) unsigned long long rawResponseSize;
@property (nonatomic) unsigned long long decompressedResponseSize;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartSearch:(id)a0 responseSize:(long long)a1 statusCode:(long long)a2 parsecStatus:(id)a3 parsecDuration:(double)a4 fbq:(id)a5 partialClientIp:(id)a6 networkTimingData:(id)a7;

@end

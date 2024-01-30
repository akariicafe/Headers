@class NSSet, NSDictionary, NSData, NSString;

@interface CNEncodedFetchResponse : NSObject <CNEncodedFetchResponse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *matchInfo;
@property (retain, nonatomic) NSSet *identifierAccountingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyResponse;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

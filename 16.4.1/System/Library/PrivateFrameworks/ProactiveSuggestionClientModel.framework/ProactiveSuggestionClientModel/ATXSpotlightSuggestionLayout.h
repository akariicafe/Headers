@class NSUUID, NSArray, NSString, ATXProactiveSuggestion;

@interface ATXSpotlightSuggestionLayout : NSObject <ATXUICacheProtocol, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSArray *collections;
@property (readonly, nonatomic) NSArray *scores;
@property (readonly, nonatomic) ATXProactiveSuggestion *highestConfidenceSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidInputWithCollections:(id)a0 scores:(id)a1;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToATXSpotlightSuggestionLayout:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)compactDescription;
- (void).cxx_destruct;
- (id)initWithCollections:(id)a0 scores:(id)a1 uuid:(id)a2;

@end

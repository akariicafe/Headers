@class NSUUID, NSString, ATXProactiveSuggestion;

@interface ATXSuggestionSearchResult : SFSearchResult <ATXSuggestionSearchResultProtocol, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;
@property (retain, nonatomic) NSUUID *blendingModelUICacheUpdateUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setRequestedTopic:(id)a0;

@end

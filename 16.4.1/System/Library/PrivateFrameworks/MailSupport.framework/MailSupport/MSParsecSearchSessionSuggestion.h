@class NSString;

@interface MSParsecSearchSessionSuggestion : NSObject <MSParsecSearchSessionResult>

@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) long long option;
@property (readonly, nonatomic) NSString *resultID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestionWithIdentifier:(id)a0 category:(id)a1 option:(long long)a2;

@end

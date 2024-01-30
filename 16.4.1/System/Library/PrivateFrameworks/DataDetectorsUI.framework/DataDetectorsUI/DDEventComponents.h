@class NSString, NSURL, NSDate;

@interface DDEventComponents : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *eventTypeIdentifier;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *location;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } originRange;
@property (nonatomic) long long source;

+ (id)_eventComponents:(id)a0 matchingResult:(struct __DDResult { } *)a1 context:(id)a2;
+ (id)_eventsFromIntelligentSuggestions:(id)a0;
+ (id)_eventsFromNaturalLanguageText:(id)a0 context:(id)a1;
+ (id)bestEventComponentsForResult:(struct __DDResult { } *)a0 withNaturalLanguageContext:(id)a1 suggestionsContext:(id)a2 context:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

@class NSDate, NSString, _PSCNAutocompleteFeedbackExited, _PSCNAutocompleteFeedbackEntered, _PSCNAutocompleteFeedbackTypedHandle, _PSCNAutocompleteFeedbackTappedSuggestion, _PSCNAutocompleteFeedbackVendedSuggestions, _PSCNAutocompleteFeedbackErasedHandle;

@interface _PSCNAutocompleteFeedback : NSObject <BMStoreData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int dataVersion;
@property (retain, nonatomic) NSDate *reportTime;
@property (retain, nonatomic) NSString *userIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *sourceBundleIdentifier;
@property (nonatomic) BOOL isImplicit;
@property (nonatomic) long long feedbackType;
@property (copy, nonatomic) _PSCNAutocompleteFeedbackEntered *entered;
@property (copy, nonatomic) _PSCNAutocompleteFeedbackExited *exited;
@property (copy, nonatomic) _PSCNAutocompleteFeedbackVendedSuggestions *vendedSuggestions;
@property (copy, nonatomic) _PSCNAutocompleteFeedbackTappedSuggestion *tappedSuggestion;
@property (copy, nonatomic) _PSCNAutocompleteFeedbackTypedHandle *typedHandle;
@property (copy, nonatomic) _PSCNAutocompleteFeedbackErasedHandle *erasedHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createExitedFeedbackWithBundleIdentifier:(id)a0 status:(long long)a1;
+ (id)createVendedSuggestionsFeedbackWithBundleIdentifier:(id)a0 suggestions:(id)a1 isImplicit:(BOOL)a2;
+ (id)createVendedSuggestionsFeedbackWithBundleIdentifier:(id)a0 suggestions:(id)a1;
+ (id)createTappedSuggestionFeedbackWithBundleIdentifier:(id)a0 suggestion:(id)a1;
+ (id)createTypedHandleFeedbackWithBundleIdentifier:(id)a0 contact:(id)a1 viaContactPicker:(BOOL)a2;
+ (id)createEnteredFeedbackWithBundleIdentifier:(id)a0 status:(long long)a1;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)createErasedHandleFeedbackWithBundleIdentifier:(id)a0 contact:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDataVersion:(unsigned int)a0 reportTime:(id)a1 userIdentifier:(id)a2 bundleIdentifier:(id)a3 sourceBundleIdentifier:(id)a4 isImplicit:(BOOL)a5 feedbackType:(long long)a6 entered:(id)a7 exited:(id)a8 vendedSuggestions:(id)a9 tappedSuggestion:(id)a10 typedHandle:(id)a11 erasedHandle:(id)a12;
- (id)initWithBundleIdentifier:(id)a0 feedbackType:(long long)a1 isImplicit:(BOOL)a2 entered:(id)a3 exited:(id)a4 vendedSuggestions:(id)a5 tappedSuggestion:(id)a6 typedHandle:(id)a7 erasedHandle:(id)a8;

@end

@class NSSet, NSString, NSURL;

@interface HFDefaultRoomSuggestionVendor : NSObject <HFRoomSuggestionVendor>

@property (class, readonly, nonatomic) HFDefaultRoomSuggestionVendor *TVAccessorySuggestionVendor;
@property (class, readonly, nonatomic) HFDefaultRoomSuggestionVendor *homeAppSuggestionVendor;

@property (readonly, nonatomic) NSURL *roomSuggestionsPlistURL;
@property (readonly, copy, nonatomic) NSSet *roomSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

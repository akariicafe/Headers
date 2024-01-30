@interface CUIKAttendeeUtils : NSObject

+ (id)displayStringForIdentityWithDecomposedName:(id)a0 useAddressAsFallback:(BOOL)a1 contactIdentifier:(id *)a2 outFirstName:(id *)a3 outLastName:(id *)a4 outDepartment:(id *)a5;
+ (id)sortEKParticipantsIgnoringNonHumans:(id)a0 event:(id)a1;
+ (id)sortedEKParticipantsForSortingIgnoringNonHumans:(id)a0 event:(id)a1;
+ (id)_contactForIdentity:(id)a0 keys:(id)a1;
+ (id)_displayStringForIdentityWithDecomposedName:(id)a0 useAddressAsFallback:(BOOL)a1 contactIdentifier:(id *)a2 outFirstName:(id *)a3 outLastName:(id *)a4 outDepartment:(id *)a5 useShortName:(BOOL)a6;
+ (id)_filteredAttendeeName:(id)a0 parenthesizedPart:(id *)a1;
+ (id)contactForIdentity:(id)a0 keys:(id)a1 provider:(id)a2;
+ (id)displayShortStringForIdentityWithDecomposedName:(id)a0 useAddressAsFallback:(BOOL)a1 contactIdentifier:(id *)a2 outFirstName:(id *)a3 outLastName:(id *)a4 outDepartment:(id *)a5;
+ (id)sortEKParticipantsIgnoringNonHumans:(id)a0 event:(id)a1 includeOrganizer:(BOOL)a2;
+ (id)sortedEKParticipantsForSortingIgnoringNonHumans:(id)a0 event:(id)a1 includeOrganizer:(BOOL)a2;

@end

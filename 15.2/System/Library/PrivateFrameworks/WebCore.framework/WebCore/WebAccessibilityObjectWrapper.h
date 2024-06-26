@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase {
    int m_isAccessibilityElement;
    unsigned long long m_accessibilityTraitsFromAncestor;
}

- (void)detach;
- (id)accessibilityIdentifier;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityTraits;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (id)accessibilityURL;
- (BOOL)_accessibilityScrollToVisible;
- (double)_accessibilityMinValue;
- (double)_accessibilityMaxValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)description;
- (BOOL)isAttachment;
- (id)attachmentView;
- (BOOL)accessibilityPerformEscape;
- (long long)accessibilityElementCount;
- (void *)tableParent;
- (id)stringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithAccessibilityObject:(void *)a0;
- (id)_accessibilityWebDocumentView;
- (BOOL)accessibilityCanFuzzyHitTest;
- (id)accessibilityPostProcessHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)_axLinkTrait;
- (unsigned long long)_axVisitedTrait;
- (unsigned long long)_axHeaderTrait;
- (unsigned long long)_axSelectedTrait;
- (BOOL)_accessibilityIsLandmarkRole:(int)a0;
- (unsigned long long)_axContainedByLandmarkTrait;
- (unsigned long long)_axContainedByFieldsetTrait;
- (unsigned long long)_axTextEntryTrait;
- (unsigned long long)_axHasTextCursorTrait;
- (unsigned long long)_axTextOperationsAvailableTrait;
- (unsigned long long)_axSecureTextFieldTrait;
- (unsigned long long)_axImageTrait;
- (unsigned long long)_axSearchFieldTrait;
- (unsigned long long)_axTextAreaTrait;
- (unsigned long long)_axWebContentTrait;
- (unsigned long long)_accessibilityTextEntryTraits;
- (unsigned long long)_axTabButtonTrait;
- (unsigned long long)_axButtonTrait;
- (unsigned long long)_axToggleTrait;
- (unsigned long long)_axPopupButtonTrait;
- (unsigned long long)_axRadioButtonTrait;
- (unsigned long long)_axStaticTextTrait;
- (unsigned long long)_axAdjustableTrait;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityLanguage;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityContainer;
- (unsigned long long)_axMenuItemTrait;
- (unsigned long long)_axUpdatesFrequentlyTrait;
- (unsigned long long)_axNotEnabledTrait;
- (unsigned long long)_accessibilityTraitsFromAncestors;
- (BOOL)containsUnnaturallySegmentedChildren;
- (BOOL)accessibilityIsWebInteractiveVideo;
- (BOOL)isSVGGroupElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)determineIsAccessibilityElement;
- (id)interactiveVideoDescription;
- (BOOL)stringValueShouldBeUsedInLabel;
- (void *)tableCellParent;
- (BOOL)_accessibilityIsStrongPasswordField;
- (BOOL)accessibilityIsShowingValidationMessage;
- (struct CGPoint { double x0; double x1; })_accessibilityScrollPosition;
- (struct CGPoint { double x0; double x1; })_accessibilityConvertPointToViewSpace:(struct CGPoint { double x0; double x1; })a0;
- (id)_accessibilityNextElementsWithCount:(unsigned int)a0;
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)a0;
- (void)accessibilityModifySelection:(unsigned char)a0 increase:(BOOL)a1;
- (struct optional<WebCore::SimpleRange> { union { char x0; struct SimpleRange { struct BoundaryPoint { struct Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>> { struct Node *x0; } x0; unsigned int x1; } x0; struct BoundaryPoint { struct Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>> { struct Node *x0; } x0; unsigned int x1; } x1; } x1; } x0; BOOL x1; })rangeForTextMarkers:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_convertToNSRange:(const void *)a0;
- (id)textMarkersForRange:(const void *)a0;
- (id)textMarkerRange;
- (long long)positionForTextMarker:(id)a0;
- (struct optional<WebCore::SimpleRange> { union { char x0; struct SimpleRange { struct BoundaryPoint { struct Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>> { struct Node *x0; } x0; unsigned int x1; } x0; struct BoundaryPoint { struct Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>> { struct Node *x0; } x0; unsigned int x1; } x1; } x1; } x0; BOOL x1; })_convertToDOMRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)arrayOfTextForTextMarkers:(id)a0 attributed:(BOOL)a1;
- (id)textMarkerForPosition:(long long)a0;
- (id)_stringFromStartMarker:(id)a0 toEndMarker:(id)a1 attributed:(BOOL)a2;
- (id)_stringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 attributed:(BOOL)a1;
- (id)textMarkerRangeForSelection;
- (id)stringForTextMarkers:(id)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)nextMarkerForCharacterOffset:(struct CharacterOffset { struct Node *x0; int x1; int x2; int x3; } *)a0;
- (id)previousMarkerForCharacterOffset:(struct CharacterOffset { struct Node *x0; int x1; int x2; int x3; } *)a0;
- (struct optional<WebCore::SimpleRange> { union { char x0; struct SimpleRange { struct BoundaryPoint { struct Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>> { struct Node *x0; } x0; unsigned int x1; } x0; struct BoundaryPoint { struct Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>> { struct Node *x0; } x0; unsigned int x1; } x1; } x1; } x0; BOOL x1; })rangeFromMarkers:(id)a0 withText:(id)a1;
- (void *)detailParentForSummaryObject:(void *)a0;
- (void *)treeItemParentForObject:(void *)a0;
- (unsigned long long)_axContainedByListTrait;
- (unsigned long long)_axContainedByTableTrait;
- (id)accessibilityDOMIdentifier;
- (void)enableAttributeCaching;
- (void)disableAttributeCaching;
- (struct CGPath { } *)_accessibilityPath;
- (id)_accessibilityWebRoleAsString;
- (id)accessibilityHeaderElements;
- (id)accessibilityTextualContext;
- (BOOL)accessibilityHasPopup;
- (id)accessibilityPopupValue;
- (BOOL)accessibilityIsDialog;
- (id)_accessibilityTreeAncestor;
- (id)_accessibilityDescriptionListAncestor;
- (id)_accessibilityListAncestor;
- (id)_accessibilityArticleAncestor;
- (unsigned long long)accessibilityRowCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (id)_accessibilityLandmarkAncestor;
- (id)_accessibilityTableAncestor;
- (BOOL)_accessibilityIsInTableCell;
- (id)_accessibilityFieldsetAncestor;
- (id)_accessibilityFrameAncestor;
- (BOOL)accessibilityIsMediaPlaying;
- (BOOL)accessibilityIsMediaMuted;
- (id)accessibilityValue;
- (void)accessibilityToggleMuteForMedia;
- (void)accessibilityVideoEnterFullscreen;
- (BOOL)_accessibilityHasTouchEventListener;
- (BOOL)_accessibilityValueIsAutofilled;
- (id)accessibilityRoleDescription;
- (id)accessibilityBrailleLabel;
- (unsigned long long)accessibilityColumnCount;
- (id)accessibilityBrailleRoleDescription;
- (id)accessibilityTitleElement;
- (id)accessibilityElementForRow:(long long)a0 andColumn:(long long)a1;
- (unsigned long long)accessibilityARIARowCount;
- (unsigned long long)accessibilityARIAColumnCount;
- (unsigned long long)accessibilityARIARowIndex;
- (unsigned long long)accessibilityARIAColumnIndex;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityColumnRange;
- (unsigned long long)accessibilityBlockquoteLevel;
- (id)accessibilityDatetimeValue;
- (id)accessibilityPlaceholderValue;
- (id)accessibilityColorStringValue;
- (BOOL)accessibilityIsIndeterminate;
- (BOOL)accessibilityIsAttachmentElement;
- (BOOL)accessibilityIsComboBox;
- (BOOL)accessibilityIsInDescriptionListTerm;
- (BOOL)accessibilityIsInDescriptionListDefinition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityRelativeFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityElementRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityVisibleContentRect;
- (BOOL)accessibilityCanSetValue;
- (id)_accessibilityResolvedEditingStyles;
- (id)_accessibilityPhotoDescription;
- (id)accessibilityImageOverlayElements;
- (id)accessibilityLinkRelationshipType;
- (BOOL)accessibilityRequired;
- (id)accessibilityFlowToElements;
- (id)accessibilityDetailsElements;
- (id)accessibilityErrorMessageElements;
- (id)accessibilityLinkedElement;
- (BOOL)_accessibilityActivate;
- (id)_accessibilityParentForSubview:(id)a0;
- (struct CGSize { double x0; double x1; })_accessibilityScrollSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityScrollVisibleRect;
- (void *)detailParentForObject:(void *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })elementTextRange;
- (id)accessibilityFindMatchingObjects:(id)a0;
- (void)accessibilityIncreaseSelection:(unsigned char)a0;
- (void)_accessibilitySetFocus:(BOOL)a0;
- (void)accessibilityDecreaseSelection:(unsigned char)a0;
- (void)accessibilityMoveSelectionToMarker:(id)a0;
- (void)_accessibilitySetValue:(id)a0;
- (id)attributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityObjectForTextMarker:(id)a0;
- (id)attributedStringForElement;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)accessibilityReplaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withText:(id)a1;
- (BOOL)accessibilityInsertText:(id)a0;
- (id)elementsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)selectionRangeString;
- (id)selectedTextMarker;
- (id)lineEndMarkerForMarker:(id)a0;
- (id)lineMarkersForMarker:(id)a0;
- (id)lineStartMarkerForMarker:(id)a0;
- (id)misspellingTextMarkerRange:(id)a0 forward:(BOOL)a1;
- (id)nextMarkerForMarker:(id)a0;
- (id)previousMarkerForMarker:(id)a0;
- (id)textMarkerForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTextMarkers:(id)a0;
- (id)textMarkerRangeFromMarkers:(id)a0 withText:(id)a1;
- (id)lineRectsForTextMarkerRange:(id)a0;
- (id)textRectsFromMarkers:(id)a0 withText:(id)a1;
- (long long)lengthForTextMarkers:(id)a0;
- (id)startOrEndTextMarkerForTextMarkers:(id)a0 isStart:(BOOL)a1;
- (id)textMarkerRangeForMarkers:(id)a0;
- (id)accessibilityExpandedTextValue;
- (id)accessibilitySpeechHint;
- (BOOL)accessibilityARIAIsBusy;
- (id)accessibilityARIALiveRegionStatus;
- (id)accessibilityARIARelevantStatus;
- (BOOL)accessibilityARIALiveRegionIsAtomic;
- (BOOL)accessibilitySupportsARIAPressed;
- (BOOL)accessibilityIsPressed;
- (BOOL)accessibilitySupportsARIAExpanded;
- (BOOL)accessibilityIsExpanded;
- (id)accessibilityInvalidStatus;
- (id)accessibilityCurrentState;
- (id)accessibilitySortDirection;
- (id)accessibilityMathRootIndexObject;
- (id)accessibilityMathRadicandObject;
- (id)accessibilityMathNumeratorObject;
- (id)accessibilityMathDenominatorObject;
- (id)accessibilityMathBaseObject;
- (id)accessibilityMathSubscriptObject;
- (id)accessibilityMathSuperscriptObject;
- (id)accessibilityMathUnderObject;
- (id)accessibilityMathOverObject;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (id)accessibilityMathPostscripts;
- (id)accessibilityMathPrescripts;
- (id)accessibilityMathType;
- (id)accessibilityMathFencedOpenString;
- (id)accessibilityMathFencedCloseString;
- (BOOL)accessibilityIsMathTopObject;
- (long long)accessibilityMathLineThickness;
- (struct CGPoint { double x0; double x1; })accessibilityClickPoint;
- (id)accessibilityElements;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)postNotification:(id)a0;
- (id)accessibilityFocusedUIElement;

@end

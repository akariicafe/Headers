@interface APUIActionCardUtils : NSObject

+ (void)initialize;
+ (id)cardViewForINIntent:(id)a0 withConfig:(id)a1;
+ (void)_configureCardInfo:(id)a0 forATXAction:(id)a1 withConfig:(id)a2;
+ (void)_configureCardInfo:(id)a0 forHeroApp:(id)a1 withConfig:(id)a2;
+ (void)_configureCardInfo:(id)a0 forINIntent:(id)a1 withConfig:(id)a2;
+ (void)_configureCardInfo:(id)a0 forINInteraction:(id)a1 withConfig:(id)a2;
+ (void)_configureCardInfo:(id)a0 forNSString:(id)a1 withConfig:(id)a2;
+ (void)_configureCardInfo:(id)a0 forNSUserActivity:(id)a1 withConfig:(id)a2;
+ (void)_configureCardInfo:(id)a0 forUAUserActivityProxy:(id)a1 withConfig:(id)a2;
+ (void)_configureCardInfo:(id)a0 forVoiceShortcutWithPhrase:(id)a1 name:(id)a2 description:(id)a3 keyImage:(id)a4 applicationBundleIdentifier:(id)a5 config:(id)a6;
+ (id)_generateCardSectionWithInfo:(id)a0 config:(id)a1;
+ (unsigned long long)_searchUIStyleForAPUIStyle:(unsigned long long)a0;
+ (id)_subtitleForAction:(id)a0 default:(id)a1;
+ (id)cardForCardSection:(id)a0;
+ (id)cardSectionForATXAction:(id)a0 withConfig:(id)a1;
+ (id)cardSectionForHeroApp:(id)a0 withConfig:(id)a1;
+ (id)cardSectionForINIntent:(id)a0 withConfig:(id)a1;
+ (id)cardSectionForINInteraction:(id)a0 withConfig:(id)a1;
+ (id)cardSectionForNSString:(id)a0 withConfig:(id)a1;
+ (id)cardSectionForNSUserActivity:(id)a0 withConfig:(id)a1;
+ (id)cardSectionForUAUserActivityProxy:(id)a0 withConfig:(id)a1;
+ (id)cardSectionForVoiceShortcutWithPhrase:(id)a0 name:(id)a1 description:(id)a2 applicationBundleIdentifier:(id)a3 config:(id)a4;
+ (id)cardSectionForVoiceShortcutWithPhrase:(id)a0 name:(id)a1 description:(id)a2 keyImage:(id)a3 applicationBundleIdentifier:(id)a4 config:(id)a5;
+ (id)cardViewForATXAction:(id)a0 withConfig:(id)a1;
+ (id)cardViewForHeroApp:(id)a0 withConfig:(id)a1;
+ (id)cardViewForINInteraction:(id)a0 withConfig:(id)a1;
+ (id)cardViewForNSUserActivity:(id)a0 withConfig:(id)a1;
+ (id)cardViewForUAUserActivityProxy:(id)a0 withConfig:(id)a1;
+ (id)cardViewForVoiceShortcutWithPhrase:(id)a0 name:(id)a1 description:(id)a2 applicationBundleIdentifier:(id)a3 config:(id)a4;
+ (id)cardViewForVoiceShortcutWithPhrase:(id)a0 name:(id)a1 description:(id)a2 keyImage:(id)a3 applicationBundleIdentifier:(id)a4 config:(id)a5;
+ (id)cardViewReuseIdentifier;
+ (BOOL)updateCardView:(id)a0 forINIntent:(id)a1 withConfig:(id)a2;
+ (BOOL)updateCardView:(id)a0 forINInteraction:(id)a1 withConfig:(id)a2;
+ (BOOL)updateCardView:(id)a0 forNSUserActivity:(id)a1 withConfig:(id)a2;
+ (BOOL)updateCardView:(id)a0 forUAUserActivityProxy:(id)a1 withConfig:(id)a2;

@end
